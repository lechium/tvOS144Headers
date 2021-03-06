/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVMovie.h>
#import <AVFCore/AVFragmentMinding.h>

@class NSArray;

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>

@property (nonatomic,readonly) NSArray * tracks; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
+(BOOL)expectsPropertyRevisedNotifications;
-(NSArray *)tracks;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)trackWithTrackID:(int)arg1 ;
-(BOOL)_mindsFragments;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(BOOL)_needsLegacyChangeNotifications;
-(BOOL)isAssociatedWithFragmentMinder;
-(Class)_classForMovieTracks;
@end

