/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MIDICIProfileResponderDelegate, MIDICIPropertyResponderDelegate;
#import <CoreMIDI/CoreMIDI-Structs.h>
@class NSMutableArray, MIDICIDeviceInfo, NSArray;

@interface MIDICIResponder : NSObject {

	shared_ptr<LocalCIResponder>* _impl;
	unsigned _serverResponderRef;
	NSMutableArray* _subscribers;
	MIDICIDeviceInfo* _deviceInfo;
	id<MIDICIProfileResponderDelegate> _profileDelegate;
	id<MIDICIPropertyResponderDelegate> _propertyDelegate;
	NSMutableArray* _profileStates;
	unsigned _midiDestination;
	BOOL _propertiesSupported;
	BOOL _isStarted;
	NSArray* initiators;

}

@property (nonatomic,retain) id<MIDICIPropertyResponderDelegate> propertyDelegate;                     //@synthesize propertyDelegate=_propertyDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * initiators; 
@property (nonatomic,retain,readonly) id<MIDICIProfileResponderDelegate> profileDelegate;              //@synthesize profileDelegate=_profileDelegate - In the implementation block
@property (nonatomic,readonly) MIDICIDeviceInfo * deviceInfo;                                          //@synthesize deviceInfo=_deviceInfo - In the implementation block
+(id)description;
-(id)description;
-(id)init;
-(BOOL)start;
-(void)stop;
-(MIDICIDeviceInfo *)deviceInfo;
-(BOOL)sendProfile:(id)arg1 onChannel:(unsigned char)arg2 profileData:(id)arg3 ;
-(NSArray *)initiators;
-(id)initWithDeviceInfo:(id)arg1 profileDelegate:(id)arg2 profileStates:(id)arg3 supportProperties:(BOOL)arg4 ;
-(BOOL)containsValidChannels:(id)arg1 ;
-(void)registerProfiles:(id)arg1 ;
-(id)getInitiators;
-(BOOL)notifyProfile:(id)arg1 onChannel:(unsigned char)arg2 isEnabled:(BOOL)arg3 ;
-(BOOL)notifyProperty:(id)arg1 onChannel:(unsigned char)arg2 forSubscribers:(id)arg3 ;
-(id<MIDICIProfileResponderDelegate>)profileDelegate;
-(id<MIDICIPropertyResponderDelegate>)propertyDelegate;
-(void)setPropertyDelegate:(id<MIDICIPropertyResponderDelegate>)arg1 ;
@end

