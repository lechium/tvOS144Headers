/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreMIDI/CoreMIDI-Structs.h>
@interface MIDICIDiscoveryManager : NSObject {

	unsigned _mClient;
	/*^block*/id _mResponseBlock;

}

@property (nonatomic,copy) id responseBlock;              //@synthesize mResponseBlock=_mResponseBlock - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
-(int)setupManager;
-(void)discoverWithHandler:(/*^block*/id)arg1 ;
-(int)createClient;
-(id)handleNotification:(const MIDINotification*)arg1 ;
-(void)debugPrintMessage;
-(void)discover;
@end

