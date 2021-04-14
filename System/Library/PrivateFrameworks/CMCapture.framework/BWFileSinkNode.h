/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>

@protocol BWNodeFileWriterStatusDelegate;
@interface BWFileSinkNode : BWSinkNode {

	id<BWNodeFileWriterStatusDelegate> _recordingStatusDelegate;

}

@property (assign,nonatomic) id<BWNodeFileWriterStatusDelegate> recordingStatusDelegate;              //@synthesize recordingStatusDelegate=_recordingStatusDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long lastFileSize; 
@property (nonatomic,readonly) SCD_Struct_BW7 lastFileDuration; 
-(void)setRecordingStatusDelegate:(id<BWNodeFileWriterStatusDelegate>)arg1 ;
-(id<BWNodeFileWriterStatusDelegate>)recordingStatusDelegate;
-(unsigned long long)lastFileSize;
-(SCD_Struct_BW7)lastFileDuration;
@end
