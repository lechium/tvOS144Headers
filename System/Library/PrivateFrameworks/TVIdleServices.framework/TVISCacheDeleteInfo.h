/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVIdleServices/TVIdleServices-Structs.h>
@class NSOrderedSet;

@interface TVISCacheDeleteInfo : NSObject {

	NSOrderedSet* _purgeableItems;

}

@property (nonatomic,readonly) const CFDictionaryRef infoDictionary; 
@property (nonatomic,readonly) unsigned long long purgeableAmount; 
@property (nonatomic,readonly) NSOrderedSet * purgeableItems;                     //@synthesize purgeableItems=_purgeableItems - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(const CFDictionaryRef)infoDictionary;
-(unsigned long long)purgeableAmount;
-(NSOrderedSet *)purgeableItems;
-(id)initWithPurgeableItems:(id)arg1 ;
-(id)infoByAddingInfo:(id)arg1 ;
@end

