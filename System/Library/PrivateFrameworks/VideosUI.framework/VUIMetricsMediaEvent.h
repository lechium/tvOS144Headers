/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VUIMetricsMediaEvent : NSObject
+(void)recordClickOfSkipInfo:(id)arg1 onMediaItem:(id)arg2 ;
+(id)generateSkipImpressionsFromSkipInfo:(id)arg1 ;
+(void)recordImpressionsOfSkipButton:(id)arg1 onMediaItem:(id)arg2 ;
+(id)_metricsDataFromTVPMediaItem:(id)arg1 isBackground:(BOOL)arg2 isAmbient:(BOOL)arg3 ;
+(id)clickMetricsDataFromTVPMediaItem:(id)arg1 ;
+(id)impressionsMetricsDataFromTVPMediaItem:(id)arg1 ;
+(void)recordPlay:(id)arg1 isLaunchingExtras:(BOOL)arg2 ;
+(void)recordPunchout:(id)arg1 isUrlForPlay:(BOOL)arg2 ;
+(void)recordBGVideoPlayOfTVPMediaItem:(id)arg1 isAmbient:(BOOL)arg2 ;
+(void)recordPlayOfTVPMediaItem:(id)arg1 ;
@end

