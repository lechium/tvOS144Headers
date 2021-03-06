/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem : DEDAttachmentItem {

	BOOL _completed;
	NSString* _extensionID;
	NSString* _filePromiseUUID;
	long long _bytesUploaded;
	long long _totalBytesExpectedToSend;
	NSURLSessionUploadTask* _uploadTask;

}

@property (retain) NSString * extensionID;                           //@synthesize extensionID=_extensionID - In the implementation block
@property (retain) NSString * filePromiseUUID;                       //@synthesize filePromiseUUID=_filePromiseUUID - In the implementation block
@property (assign) long long bytesUploaded;                          //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) long long totalBytesExpectedToSend;               //@synthesize totalBytesExpectedToSend=_totalBytesExpectedToSend - In the implementation block
@property (assign) BOOL completed;                                   //@synthesize completed=_completed - In the implementation block
@property (retain) NSURLSessionUploadTask * uploadTask;              //@synthesize uploadTask=_uploadTask - In the implementation block
+(id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3 ;
-(id)description;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)extensionID;
-(void)setExtensionID:(NSString *)arg1 ;
-(long long)bytesUploaded;
-(void)setBytesUploaded:(long long)arg1 ;
-(id)publicDescription;
-(void)setTotalBytesExpectedToSend:(long long)arg1 ;
-(long long)totalBytesExpectedToSend;
-(void)setUploadTask:(NSURLSessionUploadTask *)arg1 ;
-(id)promiseFilename;
-(void)setFilePromiseUUID:(NSString *)arg1 ;
-(NSURLSessionUploadTask *)uploadTask;
-(NSString *)filePromiseUUID;
@end

