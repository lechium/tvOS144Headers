/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiverKit.framework/AirPlayReceiverKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AirPlayReceiverKit/AirPlayReceiverKit-Structs.h>
@interface APRKStreamRecorder : NSObject {

	OpaqueFigAssetWriterRef _assetWriter;
	SCD_Struct_AP3 _recordingStartTime;
	int _audioTrackID;
	int _videoTrackID;

}
-(int)startRecordingAtURL:(id)arg1 ;
-(int)recordVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)recordAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)finalizeRecording;
-(int)_recordSampleBuffer:(opaqueCMSampleBufferRef)arg1 toTrackWithID:(int)arg2 ;
@end

