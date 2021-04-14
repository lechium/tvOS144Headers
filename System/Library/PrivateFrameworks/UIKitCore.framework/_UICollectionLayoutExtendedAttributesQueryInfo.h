/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UICollectionLayoutExtendedAttributesQueryInfo : NSObject {

	long long _sectionIndex;
	CGRect _queryRect;

}

@property (nonatomic,readonly) CGRect queryRect;                    //@synthesize queryRect=_queryRect - In the implementation block
@property (nonatomic,readonly) BOOL isOrthoSection; 
@property (nonatomic,readonly) long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(id)description;
-(long long)sectionIndex;
-(CGRect)queryRect;
-(id)initWithQueryRect:(CGRect)arg1 ;
-(id)initWithQueryRect:(CGRect)arg1 sectionIndex:(long long)arg2 ;
-(BOOL)isOrthoSection;
@end
