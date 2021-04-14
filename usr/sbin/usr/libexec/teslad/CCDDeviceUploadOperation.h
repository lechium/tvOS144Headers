//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CCDOperation.h"

@class NSError, NSMutableData, NSURLSession;

@interface CCDDeviceUploadOperation : CCDOperation
{
    _Bool _operationExecuting;	// 8 = 0x8
    _Bool _operationFinished;	// 9 = 0x9
    CDUnknownBlockType _deviceUploadCompletionBlock;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSMutableData *_responseData;	// 32 = 0x20
    NSURLSession *_urlSession;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000e45c
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) _Bool operationFinished; // @synthesize operationFinished=_operationFinished;
@property(nonatomic) _Bool operationExecuting; // @synthesize operationExecuting=_operationExecuting;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType deviceUploadCompletionBlock; // @synthesize deviceUploadCompletionBlock=_deviceUploadCompletionBlock;
- (void)completeOperationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x000000010000e1f4

@end

