/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HalogenAudioDelegate <NSObject>
@required
-(int)recordCallBackFunc:(unsigned*)arg1 AudioTimeStamp:(const AudioTimeStamp*)arg2 busNum:(unsigned)arg3 numFrames:(unsigned)arg4 AudioBufferList:(AudioBufferList*)arg5;
-(int)playbackCallBackFunc:(unsigned*)arg1 AudioTimeStamp:(const AudioTimeStamp*)arg2 busNum:(unsigned)arg3 numFrames:(unsigned)arg4 AudioBufferList:(AudioBufferList*)arg5;

@end

