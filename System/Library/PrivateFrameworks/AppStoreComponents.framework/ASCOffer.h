/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class ASCAdamID, NSDictionary, NSNumber, NSArray;


@protocol ASCOffer <NSObject,NSCopying>
@property (nonatomic,copy,readonly) ASCAdamID * id; 
@property (nonatomic,copy,readonly) NSDictionary * titles; 
@property (nonatomic,copy,readonly) NSDictionary * subtitles; 
@property (nonatomic,readonly) long long flags; 
@property (nonatomic,readonly) NSNumber * ageRating; 
@property (nonatomic,readonly) NSArray * metrics; 
@required
-(long long)flags;
-(NSArray *)metrics;
-(NSDictionary *)titles;
-(NSDictionary *)subtitles;
-(ASCAdamID *)id;
-(NSNumber *)ageRating;
-(id)offerWithMetrics:(id)arg1;

@end
