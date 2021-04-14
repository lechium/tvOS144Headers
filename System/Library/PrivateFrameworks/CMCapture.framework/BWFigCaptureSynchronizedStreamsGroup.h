/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, BWFigCaptureStream, NSArray;

@interface BWFigCaptureSynchronizedStreamsGroup : NSObject {

	OpaqueFigCaptureSynchronizedStreamsGroupRef _syncGroup;
	NSDictionary* _supportedProperties;
	BWFigCaptureStream* _synchronizationMaster;
	BOOL _invalidated;
	NSArray* _streams;
	NSArray* _activeStreams;
	os_unfair_lock_s _lock;
	BOOL _stopSupported;
	unsigned _ktraceCodePrefix;

}

@property (readonly) NSDictionary * supportedProperties;                      //@synthesize supportedProperties=_supportedProperties - In the implementation block
@property (readonly) NSArray * streams;                                       //@synthesize streams=_streams - In the implementation block
@property (readonly) BWFigCaptureStream * synchronizationMaster;              //@synthesize synchronizationMaster=_synchronizationMaster - In the implementation block
@property (readonly) BOOL stopSupported;                                      //@synthesize stopSupported=_stopSupported - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)invalidate;
-(int)stop;
-(NSDictionary *)supportedProperties;
-(NSArray *)streams;
-(id)copyProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)setProperty:(CFStringRef)arg1 value:(id)arg2 ;
-(int)setActiveStreams:(id)arg1 ;
-(id)getProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)setMasterStream:(id)arg1 slaveConfigurationsByPortType:(id)arg2 ;
-(int)setCameraControlsMasterStream:(id)arg1 ;
-(BWFigCaptureStream *)synchronizationMaster;
-(BOOL)stopSupported;
-(id)initWithFigCaptureSynchronizedStreamsGroup:(OpaqueFigCaptureSynchronizedStreamsGroupRef)arg1 captureDevice:(id)arg2 ;
-(id)activeStreams;
-(OpaqueFigCaptureSynchronizedStreamsGroupRef)figCaptureSynchronizedStreamsGroup;
@end

