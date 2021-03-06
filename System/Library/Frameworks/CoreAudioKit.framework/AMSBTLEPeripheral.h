/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CBPeripheral, NSString, CBCentralManager;

@interface AMSBTLEPeripheral : NSObject {

	CBPeripheral* peripheral;
	NSString* uuid;
	NSString* name;
	CBCentralManager* centralManager;
	double lastSeen;
	BOOL inputAvailable;
	BOOL outputAvailable;
	BOOL online;
	BOOL available;
	BOOL changingState;

}

@property (readonly) CBPeripheral * peripheral; 
@property (retain,readonly) NSString * uuid; 
@property (retain) NSString * name; 
@property (assign) double lastSeen; 
@property (assign) BOOL inputAvailable; 
@property (assign) BOOL outputAvailable; 
@property (getter=isOnline) BOOL online; 
@property (getter=isChangingState) BOOL changingState; 
@property (getter=isAvailable) BOOL available; 
-(NSString *)name;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(BOOL)disconnect;
-(NSString *)uuid;
-(BOOL)connect;
-(BOOL)canConnect;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setOnline:(BOOL)arg1 ;
-(BOOL)hidden;
-(BOOL)isAvailable;
-(CBPeripheral *)peripheral;
-(void)setChangingState:(BOOL)arg1 ;
-(double)lastSeen;
-(void)setLastSeen:(double)arg1 ;
-(BOOL)isOnline;
-(BOOL)isChangingState;
-(BOOL)inputAvailable;
-(BOOL)outputAvailable;
-(id)initWithID:(id)arg1 name:(id)arg2 manager:(id)arg3 ;
-(void)setInputAvailable:(BOOL)arg1 ;
-(void)setOutputAvailable:(BOOL)arg1 ;
-(BOOL)updateAvailableStateChanged;
@end

