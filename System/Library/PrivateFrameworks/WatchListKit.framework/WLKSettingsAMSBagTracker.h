/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject {

	NSDictionary* _trackedBagKeys;

}

@property (nonatomic,retain) NSDictionary * trackedBagKeys;              //@synthesize trackedBagKeys=_trackedBagKeys - In the implementation block
+(id)sharedTracker;
-(id)init;
-(void)_updateKeys:(id)arg1 ;
-(BOOL)_amsBagBoolValueForKey:(id)arg1 ;
-(void)_setIsNowPlayingEnabled:(BOOL)arg1 ;
-(void)_setIsSportsEnabled:(BOOL)arg1 ;
-(void)_updateBoolValueForTrackedKey:(id)arg1 ;
-(void)updateTrackedBagValues;
-(void)updateTrackedBagValuesWithChangedKeys:(id)arg1 ;
-(id)isNowPlayingEnabled;
-(id)isSportsEnabled;
-(NSDictionary *)trackedBagKeys;
-(void)setTrackedBagKeys:(NSDictionary *)arg1 ;
@end

