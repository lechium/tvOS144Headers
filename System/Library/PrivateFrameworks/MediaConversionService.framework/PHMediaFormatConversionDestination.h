/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaConversionService/MediaConversionService-Structs.h>
#import <MediaConversionService/PHMediaFormatConversionContent.h>

@class NSURL, PFVideoExportRangeCoordinator, NSString;

@interface PHMediaFormatConversionDestination : PHMediaFormatConversionContent {

	NSURL* _temporaryFilesURLToDelete;
	NSURL* _temporaryOutputDirectoryURL;
	NSURL* _temporaryOutputFileURL;
	PFVideoExportRangeCoordinator* _singlePassVideoExportRangeCoordinator;
	NSString* _outputPathExtension;
	unsigned long long _singlePassVideoConversionTargetLength;

}

@property (retain) PFVideoExportRangeCoordinator * singlePassVideoExportRangeCoordinator;              //@synthesize singlePassVideoExportRangeCoordinator=_singlePassVideoExportRangeCoordinator - In the implementation block
@property (retain) NSString * outputPathExtension;                                                     //@synthesize outputPathExtension=_outputPathExtension - In the implementation block
@property (readonly) NSURL * temporaryOutputDirectoryURL; 
@property (readonly) NSURL * temporaryOutputFileURL; 
@property (readonly) BOOL usesSinglePassVideoConversion; 
@property (assign) unsigned long long singlePassVideoConversionTargetLength;                           //@synthesize singlePassVideoConversionTargetLength=_singlePassVideoConversionTargetLength - In the implementation block
+(id)sharedCleanupQueue;
+(id)destinationForConversionReturningUnchangedSource:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)waitForAvailabilityOfRange:(NSRange)arg1 timeout:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSString *)outputPathExtension;
-(BOOL)usesSinglePassVideoConversion;
-(void)removeTemporaryFiles;
-(void)addAvailableRange:(NSRange)arg1 ;
-(PFVideoExportRangeCoordinator *)singlePassVideoExportRangeCoordinator;
-(BOOL)padToLength:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSURL *)temporaryOutputFileURL;
-(BOOL)createTemporaryOutputDirectoryWithError:(id*)arg1 ;
-(void)generateTemporaryOutputFileURLForRequest:(id)arg1 ;
-(id)temporaryDirectoryPrefix;
-(BOOL)createTemporaryOutputFileWithErrorError:(id*)arg1 ;
-(NSURL *)temporaryOutputDirectoryURL;
-(void)removeTemporaryFilesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)padVideoToLength:(unsigned long long)arg1 fileHandle:(id)arg2 error:(id*)arg3 ;
-(BOOL)padImageToLength:(unsigned long long)arg1 fileHandle:(id)arg2 error:(id*)arg3 ;
-(void)enableSinglePassVideoConversionWithTargetLength:(unsigned long long)arg1 ;
-(id)errorForSinglePassVideoConversionError:(id)arg1 ;
-(void)setSinglePassVideoExportRangeCoordinator:(PFVideoExportRangeCoordinator *)arg1 ;
-(void)setOutputPathExtension:(NSString *)arg1 ;
-(unsigned long long)singlePassVideoConversionTargetLength;
-(void)setSinglePassVideoConversionTargetLength:(unsigned long long)arg1 ;
@end

