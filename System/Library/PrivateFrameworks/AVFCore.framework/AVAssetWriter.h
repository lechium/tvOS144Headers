/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVWeakObservable.h>
#import <AVFCore/AVKeyPathDependencyHost.h>

@class AVAssetWriterInternal, AVAssetWriterHelper, NSURL, NSString, NSArray, NSError;

@interface AVAssetWriter : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {

	AVAssetWriterInternal* _internal;

}

@property (getter=_helper,retain,readonly) AVAssetWriterHelper * helper; 
@property (nonatomic,copy,readonly) NSURL * outputURL; 
@property (nonatomic,copy,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) NSArray * availableMediaTypes; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
+(id)_errorForOSStatus:(int)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSError *)error;
-(id)_helper;
-(long long)status;
-(NSArray *)metadata;
-(NSURL *)outputURL;
-(void)flush;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)inputs;
-(id)initWithContentType:(id)arg1 ;
-(CGAffineTransform)preferredTransform;
-(void)cancelWriting;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(BOOL)startWriting;
-(void)addInput:(id)arg1 ;
-(BOOL)canAddInput:(id)arg1 ;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setOverallDurationHint:(SCD_Struct_AV6)arg1 ;
-(void)setWritesSinglePassUsingPredeterminedFileSize:(long long)arg1 mediaDataSize:(long long)arg2 ;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(NSString *)outputFileType;
-(float)preferredRate;
-(void)setPreferredRate:(float)arg1 ;
-(BOOL)finishWriting;
-(SCD_Struct_AV6)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_AV6)arg1 ;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(float)preferredVolume;
-(SCD_Struct_AV6)overallDurationHint;
-(void)setPreferredVolume:(float)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(NSURL *)directoryForTemporaryFiles;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(id)inputGroups;
-(SCD_Struct_AV6)preferredOutputSegmentInterval;
-(void)setPreferredOutputSegmentInterval:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)initialSegmentStartTime;
-(void)setInitialSegmentStartTime:(SCD_Struct_AV6)arg1 ;
-(id)outputFileTypeProfile;
-(void)setOutputFileTypeProfile:(id)arg1 ;
-(long long)initialMovieFragmentSequenceNumber;
-(void)setInitialMovieFragmentSequenceNumber:(long long)arg1 ;
-(BOOL)producesCombinableFragments;
-(void)setProducesCombinableFragments:(BOOL)arg1 ;
-(id)finishWritingDelegate;
-(BOOL)_initInternalObject;
-(BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSArray *)availableMediaTypes;
-(BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)flushSegment;
-(id)initWithFileType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 ;
-(BOOL)_supportsSampleReferencesReturningError:(id*)arg1 ;
-(void)setFinishWritingDelegate:(id)arg1 ;
-(void)_transitionToFailedStatusWithError:(id)arg1 ;
@end

