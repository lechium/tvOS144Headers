/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessoryDataStreamAdapterDelegate.h>

@protocol OS_dispatch_queue;
@class HMDHAPAccessory, NSObject, NSString, HMDAccessoryDiagnosticsSettings, HMDAccessoryDataStreamAdapter, NSDictionary, NSNumber, NSFileHandle;

@interface HMDAccessoryDiagnosticsSession : HMFObject <HMFLogging, HMDAccessoryDataStreamAdapterDelegate> {

	BOOL _readyForDataTransfer;
	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _reason;
	HMDAccessoryDiagnosticsSettings* _settings;
	HMDAccessoryDataStreamAdapter* _dataStream;
	/*^block*/id _pendingCompletionHandler;
	NSString* _filePath;
	NSDictionary* _urlParameters;
	NSNumber* _expectedDataSequenceNumber;
	NSFileHandle* _fileHandle;

}

@property (__weak,readonly) HMDHAPAccessory * accessory;                      //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSString * reason;                                       //@synthesize reason=_reason - In the implementation block
@property (readonly) HMDAccessoryDiagnosticsSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (retain) HMDAccessoryDataStreamAdapter * dataStream;                //@synthesize dataStream=_dataStream - In the implementation block
@property (copy) id pendingCompletionHandler;                                 //@synthesize pendingCompletionHandler=_pendingCompletionHandler - In the implementation block
@property (copy) NSString * filePath;                                         //@synthesize filePath=_filePath - In the implementation block
@property (copy) NSDictionary * urlParameters;                                //@synthesize urlParameters=_urlParameters - In the implementation block
@property (retain) NSNumber * expectedDataSequenceNumber;                     //@synthesize expectedDataSequenceNumber=_expectedDataSequenceNumber - In the implementation block
@property (retain) NSFileHandle * fileHandle;                                 //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign) BOOL readyForDataTransfer;                                 //@synthesize readyForDataTransfer=_readyForDataTransfer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(NSString *)reason;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSFileHandle *)fileHandle;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(HMDAccessoryDiagnosticsSettings *)settings;
-(void)shutDown;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(HMDHAPAccessory *)accessory;
-(id)fileExtension;
-(BOOL)_handleReceivedData:(id)arg1 ;
-(HMDAccessoryDataStreamAdapter *)dataStream;
-(void)setDataStream:(HMDAccessoryDataStreamAdapter *)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(NSDictionary *)urlParameters;
-(BOOL)dataStreamAdapter:(id)arg1 didReceiveData:(id)arg2 ;
-(void)dataStreamAdapterDidFailDataRead:(id)arg1 ;
-(void)dataStreamAdapterDidCompleteDataRead:(id)arg1 ;
-(BOOL)readyForDataTransfer;
-(id)pendingCompletionHandler;
-(void)_callCompletionHandlerWithError:(id)arg1 ;
-(void)setReadyForDataTransfer:(BOOL)arg1 ;
-(void)setExpectedDataSequenceNumber:(NSNumber *)arg1 ;
-(void)setPendingCompletionHandler:(id)arg1 ;
-(void)setUrlParameters:(NSDictionary *)arg1 ;
-(BOOL)_validDataSequenceNumber:(id)arg1 ;
-(id)_createLogFile;
-(NSNumber *)expectedDataSequenceNumber;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 settings:(id)arg3 ;
-(void)setUpWithCompletion:(/*^block*/id)arg1 ;
-(void)readDataWithCompletion:(/*^block*/id)arg1 ;
@end

