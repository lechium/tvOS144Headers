/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/MLTask.h>
#import <libobjc.A.dylib/MLTaskStateTransitionDelegate.h>

@protocol MLUpdatable, MLBatchProvider, OS_dispatch_queue;
@class MLModel, MLUpdateProgressHandlers, NSObject, NSURL, NSString;

@interface MLUpdateTask : MLTask <MLTaskStateTransitionDelegate> {

	BOOL _updateHasStarted;
	MLModel*<MLUpdatable> _updatableModel;
	id<MLBatchProvider> _trainingData;
	MLUpdateProgressHandlers* _progressHandlers;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSURL* _updatableModelURL;

}

@property (nonatomic,readonly) MLModel*<MLUpdatable> updatableModel;                     //@synthesize updatableModel=_updatableModel - In the implementation block
@property (nonatomic,readonly) id<MLBatchProvider> trainingData;                         //@synthesize trainingData=_trainingData - In the implementation block
@property (nonatomic,readonly) MLUpdateProgressHandlers * progressHandlers;              //@synthesize progressHandlers=_progressHandlers - In the implementation block
@property (assign,nonatomic) BOOL updateHasStarted;                                      //@synthesize updateHasStarted=_updateHasStarted - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> updateQueue;                 //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,readonly) NSURL * updatableModelURL;                                //@synthesize updatableModelURL=_updatableModelURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)updateModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 writeToURL:(id)arg4 error:(id*)arg5 ;
+(id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 completionHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
+(id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 completionHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
+(id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 progressHandlers:(id)arg4 error:(id*)arg5 ;
+(id)updateTaskForModelAtURL:(id)arg1 trainingData:(id)arg2 progressHandlers:(id)arg3 error:(id*)arg4 ;
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)updateQueue;
-(MLUpdateProgressHandlers *)progressHandlers;
-(void)onResumptionWithTaskContext:(id)arg1 ;
-(void)onSuspensionWithTaskContext:(id)arg1 ;
-(void)onCancellation;
-(void)onCompletionWithTaskContext:(id)arg1 ;
-(void)onFailureWithTaskContext:(id)arg1 ;
-(id)initWithModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 progressHandlers:(id)arg4 error:(id*)arg5 ;
-(void)resumeWithParameters:(id)arg1 ;
-(void)_invokeProgressHandlerForContext:(id)arg1 ;
-(/*^block*/id)_progressHandlerBlock;
-(/*^block*/id)_completionHandlerBlock;
-(MLModel*<MLUpdatable>)updatableModel;
-(id<MLBatchProvider>)trainingData;
-(BOOL)updateHasStarted;
-(void)setUpdateHasStarted:(BOOL)arg1 ;
-(NSURL *)updatableModelURL;
@end

