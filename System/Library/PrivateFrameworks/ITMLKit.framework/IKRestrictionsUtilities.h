/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSString;

@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ratingForRestrictionRanking:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3 ;
+(id)_ratingDictionaryForDomain:(id)arg1 countryCode:(id)arg2 ;
+(id)_purgableRatingsDictionary;
+(id)orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2 ;
+(id)rankingForRestrictionRating:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
@end

