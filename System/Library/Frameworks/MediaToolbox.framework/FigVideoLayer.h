/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaToolbox/FigBaseCALayer.h>

@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {

	FigVideoLayerInternal* _videoLayer;

}
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)notificationBarrier;
-(id)layerDisplayName;
-(void)_sendVideoLayerIsBeingServicedNotification;
-(BOOL)isVideoLayerBeingServiced;
@end

