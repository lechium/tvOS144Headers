/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RTIInputSystemSessionDelegate.h>
#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>
#import <TVRemoteCore/_TVRXKeyboardImpl.h>

@class _TVRXKeyboardController, _TVRCMRTelevisionWrapper, RTIInputSystemSourceSession, TVRCKeyboardAttributes, NSDate, NSString;

@interface _TVRCMediaRemoteRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, _TVRXKeyboardImpl> {

	BOOL _editing;
	_TVRXKeyboardController* _keyboardController;
	_TVRCMRTelevisionWrapper* _television;
	RTIInputSystemSourceSession* _currentSession;
	TVRCKeyboardAttributes* _currentAttributes;
	NSDate* _lastSessionTimestamp;

}

@property (assign,nonatomic) BOOL editing;                                                     //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) RTIInputSystemSourceSession * currentSession;                     //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,retain) TVRCKeyboardAttributes * currentAttributes;                       //@synthesize currentAttributes=_currentAttributes - In the implementation block
@property (nonatomic,retain) NSDate * lastSessionTimestamp;                                    //@synthesize lastSessionTimestamp=_lastSessionTimestamp - In the implementation block
@property (assign,nonatomic,__weak) _TVRXKeyboardController * keyboardController;              //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                            //@synthesize television=_television - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)attributes;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)isEditing;
-(void)handleTextActionPayload:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(RTIInputSystemSourceSession *)currentSession;
-(_TVRCMRTelevisionWrapper *)television;
-(TVRCKeyboardAttributes *)currentAttributes;
-(void)setCurrentSession:(RTIInputSystemSourceSession *)arg1 ;
-(void)inputSessionDidBegin:(id)arg1 ;
-(void)inputSessionDidEnd:(id)arg1 ;
-(void)inputSessionDidDie:(id)arg1 ;
-(_TVRXKeyboardController *)keyboardController;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(void)sendReturnKey;
-(void)setTextActionPayload:(id)arg1 ;
-(BOOL)editing;
-(void)setCurrentAttributes:(TVRCKeyboardAttributes *)arg1 ;
-(void)_stopObservingTelevisionEditingSession;
-(void)_receivedInputSourceSession:(id)arg1 ;
-(BOOL)_shouldAllowSourceSession;
-(NSDate *)lastSessionTimestamp;
-(void)setLastSessionTimestamp:(NSDate *)arg1 ;
@end

