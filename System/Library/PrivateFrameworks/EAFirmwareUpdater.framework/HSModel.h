/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HSModelDelegate, OS_dispatch_queue;
@class NSObject;

@interface HSModel : NSObject {

	id<HSModelDelegate> delegate;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)getHSModelForEngineMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 numHSModels:(unsigned long long)arg3 modelBuffer:(char*)arg4 length:(unsigned long long)arg5 ;
@end
