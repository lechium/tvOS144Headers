/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject {

	NSMutableDictionary* _resourceIDsToDownloadTasks;
	NSMutableDictionary* _taskIDsToDownloadTasks;

}
-(id)init;
-(void)reset;
-(id)_identifierForResource:(id)arg1 ;
-(void)reportCompletionForResource:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(void)setTransferTask:(id)arg1 forResource:(id)arg2 ;
-(BOOL)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)arg1 taskIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelTaskWithTaskIdentifier:(id)arg1 ;
@end

