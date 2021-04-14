/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StreamingZip/StreamingZip-Structs.h>
#import <libobjc.A.dylib/SZExtractor.h>

@protocol SZExtractor <NSObject,NSSecureCoding>
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> extractorDelegate; 
@property (nonatomic,readonly) BOOL doesConsumeExtractedData; 
@optional
-(void)prepareForExtractionToPath:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(BOOL)doesConsumeExtractedData;
-(BOOL)consumeExtractedDataIfNeeded;

@required
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1;
-(void)terminateStreamWithError:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)prepareForExtraction:(/*^block*/id)arg1;
-(void)setExtractorDelegate:(id)arg1;
-(id<SZExtractorDelegate>)extractorDelegate;

@end

#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSXPCConnection, StreamingUnzipper, NSObject, SZExtractorInternalDelegate, NSError;

@interface SZExtractor : NSObject <SZExtractor, NSCopying> {

	BOOL _isLocalExtractor;
	BOOL _needsPreparation;
	BOOL _hasHadPostSetupMethodsCalled;
	NSString* _extractionPath;
	NSDictionary* _options;
	unsigned long long _lastResumptionOffset;
	NSXPCConnection* _unzipServiceConnection;
	StreamingUnzipper* _inProcessUnzipper;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SZExtractorInternalDelegate* _internalExtractorDelegate;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long lastResumptionOffset;                                //@synthesize lastResumptionOffset=_lastResumptionOffset - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * unzipServiceConnection;                             //@synthesize unzipServiceConnection=_unzipServiceConnection - In the implementation block
@property (nonatomic,readonly) StreamingUnzipper * inProcessUnzipper;                                //@synthesize inProcessUnzipper=_inProcessUnzipper - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                             //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) SZExtractorInternalDelegate * internalExtractorDelegate;              //@synthesize internalExtractorDelegate=_internalExtractorDelegate - In the implementation block
@property (nonatomic,retain) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL isLocalExtractor;                                                //@synthesize isLocalExtractor=_isLocalExtractor - In the implementation block
@property (assign,nonatomic) BOOL needsPreparation;                                                  //@synthesize needsPreparation=_needsPreparation - In the implementation block
@property (assign,nonatomic) BOOL hasHadPostSetupMethodsCalled;                                      //@synthesize hasHadPostSetupMethodsCalled=_hasHadPostSetupMethodsCalled - In the implementation block
@property (nonatomic,copy) NSString * extractionPath;                                                //@synthesize extractionPath=_extractionPath - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> extractorDelegate; 
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> delegate; 
@property (nonatomic,readonly) BOOL doesConsumeExtractedData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)knownSZExtractorImplementations;
+(void)enableDebugLogging;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SZExtractorDelegate>)delegate;
-(void)setDelegate:(id<SZExtractorDelegate>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)prepareForExtractionToPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)terminateStreamWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)options;
-(BOOL)doesConsumeExtractedData;
-(id)initWithOptions:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BOOL)needsPreparation;
-(BOOL)_isValidObject;
-(void)_suspendStreamWithCompletionBlockSynchronously:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)extractionPath;
-(BOOL)isLocalExtractor;
-(id)initWithPath:(id)arg1 options:(id)arg2 ;
-(void)_setUpWithPath:(id)arg1 options:(id)arg2 ;
-(id)initWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(BOOL)_synchronouslyPrepareForExtractionAtOffset:(unsigned long long*)arg1 ;
-(void)_prepareForExtractionSynchronously:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSXPCConnection *)unzipServiceConnection;
-(SZExtractorInternalDelegate *)internalExtractorDelegate;
-(void)_invalidateObject;
-(void)setLastResumptionOffset:(unsigned long long)arg1 ;
-(unsigned long long)lastResumptionOffset;
-(StreamingUnzipper *)inProcessUnzipper;
-(BOOL)hasHadPostSetupMethodsCalled;
-(void)_prepareForLocalExtraction:(/*^block*/id)arg1 ;
-(void)_prepareForRemoteExtractionSynchronously:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setExtractionPath:(NSString *)arg1 ;
-(void)prepareForExtraction:(/*^block*/id)arg1 ;
-(void)setHasHadPostSetupMethodsCalled:(BOOL)arg1 ;
-(void)setActiveExtractorDelegateMethods:(int)arg1 ;
-(void)setExtractorDelegate:(id<SZExtractorDelegate>)arg1 ;
-(id<SZExtractorDelegate>)extractorDelegate;
-(BOOL)consumeExtractedDataIfNeeded;
-(id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long*)arg2 ;
-(id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long*)arg4 ;
-(id)initForRemoteExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(id)initForLocalExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(void)setNeedsPreparation:(BOOL)arg1 ;
@end

