/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	int _netrbState;
	int _netrbReason;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)readNETRBState:(int*)arg1 andReason:(int*)arg2 ;
-(void)getNETRBState:(int*)arg1 andReason:(int*)arg2 ;
-(void)sendStateUpdate;
-(BOOL)shouldShowTethering;
-(BOOL)isTetheringEnabled;
-(BOOL)isDataEnabled;
@end
