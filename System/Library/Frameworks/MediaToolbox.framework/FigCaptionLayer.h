/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class FigCaptionLayerPrivate, NSString;

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate> {

	FigCaptionLayerPrivate* _priv;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)layoutSublayers;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setFontName:(const char*)arg1 ;
-(void)setVideoRelativeToViewport:(CGRect)arg1 ;
-(void)setCaptionsAvoidanceMargins:(FigGeometryMargins)arg1 ;
-(void)resetCaptions;
-(void)processCaptionCommand:(unsigned)arg1 data:(id)arg2 ;
-(void)updateDisplay:(OpaqueFigCFCaptionRendererRef)arg1 ;
@end

