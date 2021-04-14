/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXHorizontalCollectionGadgetProvider.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@class NSDate;

@interface PXForYouRecentInterestHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable> {

	NSDate* _cachedPriorityDate;

}

@property (nonatomic,retain) NSDate * cachedPriorityDate;                  //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
-(long long)defaultPriority;
-(BOOL)supportsDynamicRanking;
-(void)resetPriorityDate;
-(NSDate *)priorityDate;
-(long long)priorityType;
-(id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2 ;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
@end

