/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PineBoardServices/PBSAppState.h>

@class PBSBadgeValue, NSString, NSSet;

@interface PBSMutableAppState : PBSAppState

@property (nonatomic,copy) PBSBadgeValue * badgeValue; 
@property (nonatomic,copy) NSString * iconName; 
@property (assign,getter=isBadgeEnabled,nonatomic) BOOL badgeEnabled; 
@property (assign,getter=isRecentlyUpdated,nonatomic) BOOL recentlyUpdated; 
@property (nonatomic,copy) NSSet * disabledReasons; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBadgeValue:(PBSBadgeValue *)arg1 ;
-(void)setIconName:(NSString *)arg1 ;
-(void)setBadgeEnabled:(BOOL)arg1 ;
-(void)setRecentlyUpdated:(BOOL)arg1 ;
-(void)setCacheDeletingCount:(long long)arg1 ;
-(void)setDisabledReasons:(NSSet *)arg1 ;
@end

