/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSProgress, PHMediaFormatConversionRequest, NSURL, NSFileHandle;

@interface PHMediaFormatConversionSinglePassVideoProgressObserver : NSObject {

	NSProgress* _progress;
	PHMediaFormatConversionRequest* _request;
	NSURL* _observedFileURL;
	NSFileHandle* _observedFileHandle;
	unsigned long long _lastFileSize;

}

@property (__weak) NSProgress * progress;                                 //@synthesize progress=_progress - In the implementation block
@property (__weak) PHMediaFormatConversionRequest * request;              //@synthesize request=_request - In the implementation block
@property (retain) NSURL * observedFileURL;                               //@synthesize observedFileURL=_observedFileURL - In the implementation block
@property (retain) NSFileHandle * observedFileHandle;                     //@synthesize observedFileHandle=_observedFileHandle - In the implementation block
@property (assign) unsigned long long lastFileSize;                       //@synthesize lastFileSize=_lastFileSize - In the implementation block
-(PHMediaFormatConversionRequest *)request;
-(NSProgress *)progress;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)stopObserving;
-(void)setRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(unsigned long long)lastFileSize;
-(void)startObservingProgress:(id)arg1 forRequest:(id)arg2 ;
-(NSURL *)observedFileURL;
-(void)setObservedFileURL:(NSURL *)arg1 ;
-(NSFileHandle *)observedFileHandle;
-(void)setObservedFileHandle:(NSFileHandle *)arg1 ;
-(void)setLastFileSize:(unsigned long long)arg1 ;
@end

