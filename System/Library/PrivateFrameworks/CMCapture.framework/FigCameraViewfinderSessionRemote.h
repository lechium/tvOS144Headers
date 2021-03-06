/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/FigCameraViewfinderSession.h>

@protocol FigCameraViewfinderSessionRemoteObject;
@class FigStateMachine;

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession {

	id<FigCameraViewfinderSessionRemoteObject> _remoteViewfinderSession;
	unsigned _state;
	FigStateMachine* _stateMachine;

}
-(void)dealloc;
-(void)_serverDied;
-(void)_setupStateMachine;
-(void)openPreviewStreamWithOptions:(id)arg1 ;
-(void)closePreviewStream;
-(void)_clientDisconnectedFromServer;
-(id)_initWithRemoteViewfinderSession:(id)arg1 delegateStorage:(id)arg2 ;
-(void)_previewStreamDidOpen;
-(void)_previewStreamDidCloseWithStatus:(int)arg1 ;
@end

