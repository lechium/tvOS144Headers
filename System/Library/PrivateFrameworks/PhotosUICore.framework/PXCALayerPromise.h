/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableCALayerPromise.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class CALayer, NSString;

@interface PXCALayerPromise : PXObservable <PXMutableCALayerPromise, CALayerDelegate> {

	BOOL _startedLayerRealization;
	BOOL _rendersAsynchronously;
	BOOL _shouldCancel;
	double _contentsScale;
	CALayer* _layer;
	CGRect _bounds;

}

@property (setter=_setLayer:,nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) BOOL shouldCancel;                            //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double contentsScale;                         //@synthesize contentsScale=_contentsScale - In the implementation block
@property (nonatomic,readonly) BOOL rendersAsynchronously;                   //@synthesize rendersAsynchronously=_rendersAsynchronously - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(CGRect)bounds;
-(CALayer *)layer;
-(double)contentsScale;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)rendersAsynchronously;
-(void)setRendersAsynchronously:(BOOL)arg1 ;
-(BOOL)shouldCancel;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)createCustomLayer;
-(void)drawLayerContentInContext:(CGContextRef)arg1 ;
-(void)startLayerRealization;
-(void)_realizeLayer;
-(void)_handlePreparedLayer:(id)arg1 ;
-(void)cancelLayerRealization;
-(void)_setLayer:(id)arg1 ;
-(void)invalidateLayer;
@end

