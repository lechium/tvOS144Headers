/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetReaderInternal, AVAsset, NSError, NSArray;

@interface AVAssetReader : NSObject {

	AVAssetReaderInternal* _priv;

}

@property (getter=_figAssetReader,nonatomic,readonly) OpaqueFigAssetReaderRef figAssetReader; 
@property (assign,setter=_setReadSingleSample:,getter=_readSingleSample,nonatomic) BOOL readSingleSample; 
@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (assign,nonatomic) SCD_Struct_AV7 timeRange; 
@property (nonatomic,readonly) NSArray * outputs; 
+(void)initialize;
+(id)assetReaderWithAsset:(id)arg1 error:(id*)arg2 ;
+(id)_errorForOSStatus:(int)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(long long)status;
-(void)setTimeRange:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)timeRange;
-(NSArray *)outputs;
-(AVAsset *)asset;
-(id)initWithAsset:(id)arg1 error:(id*)arg2 ;
-(void)addOutput:(id)arg1 ;
-(BOOL)startReading;
-(void)cancelReading;
-(BOOL)canAddOutput:(id)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(void)_setReadSingleSample:(BOOL)arg1 ;
-(void)_tearDownFigAssetReader;
-(void)_transitionToStatus:(long long)arg1 failureError:(id)arg2 ;
-(BOOL)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_outputDidFinish:(id)arg1 ;
-(BOOL)_readSingleSample;
-(void)_handleServerDiedNotification;
-(OpaqueFigAssetReaderRef)_figAssetReader;
@end

