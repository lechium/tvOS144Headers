/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLBackgroundJobWorkerProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString, PLPhotoLibrary;

@interface PLBackgroundJobWorker : NSObject <PLBackgroundJobWorkerProtocol> {

	/*^block*/id _workerCompleteCompletionHandler;
	/*^block*/id _currentManagedObjectCompletionHandler;
	Aq _workerAtomicCounter;
	Aq _completionHandlerAtomicCounter;
	/*^block*/id _workerForcefullyStopHandler;
	NSMutableArray* _pendingJobs;
	unsigned long long _totalJobsCount;
	NSObject*<OS_dispatch_queue> _processingQueue;
	os_unfair_lock_s _lock;
	BOOL _shouldStop;
	unsigned long long _workerPriority;
	NSString* _workerName;
	NSString* _workerDetailedName;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary;                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) unsigned long long workerPriority;              //@synthesize workerPriority=_workerPriority - In the implementation block
@property (nonatomic,readonly) NSString * workerName;                          //@synthesize workerName=_workerName - In the implementation block
@property (nonatomic,readonly) NSString * workerDetailedName;                  //@synthesize workerDetailedName=_workerDetailedName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workerWithLibrary:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(BOOL)isInterruptible;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithPriority:(unsigned long long)arg1 photoLibrary:(id)arg2 ;
-(BOOL)hasPendingJobs;
-(id)managedObjectIDsNeedingProcessing;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)workerName;
-(void)stopWorkingOnManagedObjectID:(id)arg1 ;
-(NSString *)workerDetailedName;
-(void)startWorkWithCompletion:(/*^block*/id)arg1 ;
-(void)stopAllWork;
-(unsigned long long)workerPriority;
-(void)_processNextManagedObject;
-(void)_handleAllJobsComplete;
@end

