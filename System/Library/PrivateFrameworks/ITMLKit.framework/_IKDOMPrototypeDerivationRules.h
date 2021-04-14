/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _IKDOMPrototypeDerivationRules : NSObject {

	NSArray* _mutationRules;
	NSArray* _indexPath;

}

@property (nonatomic,copy,readonly) NSArray * mutationRules;              //@synthesize mutationRules=_mutationRules - In the implementation block
@property (nonatomic,copy,readonly) NSArray * indexPath;                  //@synthesize indexPath=_indexPath - In the implementation block
+(id)derivationRulesForDOMElement:(id)arg1 ;
+(void)removeRulesFromDOMElement:(id)arg1 ;
-(NSArray *)indexPath;
-(id)initWithIndexPath:(id)arg1 mutationRules:(id)arg2 ;
-(NSArray *)mutationRules;
@end

