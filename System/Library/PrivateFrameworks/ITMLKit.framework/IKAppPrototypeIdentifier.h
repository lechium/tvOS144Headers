/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface IKAppPrototypeIdentifier : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _selector;
	NSDictionary* _groupingValues;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * selector;                        //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * groupingValues;              //@synthesize groupingValues=_groupingValues - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)selector;
-(NSString *)identifier;
-(NSDictionary *)groupingValues;
-(id)initWithIdentifier:(id)arg1 selector:(id)arg2 groupingValues:(id)arg3 ;
@end

