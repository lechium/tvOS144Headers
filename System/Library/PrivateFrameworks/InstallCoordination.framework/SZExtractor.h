/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


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

