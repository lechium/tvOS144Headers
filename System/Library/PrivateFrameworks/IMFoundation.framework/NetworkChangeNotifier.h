/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMSystemMonitorListener.h>
#import <IMFoundation/IMConnectionMonitorDelegate.h>

@class NSString, NSArray, IMConnectionMonitor;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate> {

	BOOL _lastPostedNetworkUp;
	SCDynamicStoreRef _store;
	NSString* _myIP;
	NSArray* _myIPs;
	IMConnectionMonitor* _connectionMonitor;

}

@property (assign,nonatomic) SCDynamicStoreRef store;                              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL lastPostedNetworkUp;                             //@synthesize lastPostedNetworkUp=_lastPostedNetworkUp - In the implementation block
@property (nonatomic,retain) IMConnectionMonitor * connectionMonitor;              //@synthesize connectionMonitor=_connectionMonitor - In the implementation block
@property (nonatomic,retain) NSString * myIP;                                      //@synthesize myIP=_myIP - In the implementation block
@property (nonatomic,retain) NSArray * myIPs;                                      //@synthesize myIPs=_myIPs - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkUp; 
@property (nonatomic,readonly) NSString * myGatewayAddress; 
@property (nonatomic,readonly) NSString * myIPAddress; 
@property (nonatomic,readonly) NSArray * myIPAddresses; 
@property (nonatomic,readonly) SCDynamicStoreRef getDynamicStore; 
+(id)sharedInstance;
+(void)disableNotifications;
+(BOOL)enableNotifications;
-(id)init;
-(void)dealloc;
-(void)setStore:(SCDynamicStoreRef)arg1 ;
-(SCDynamicStoreRef)store;
-(void)_clearIPCache;
-(BOOL)_listenForChanges;
-(int)linkQualityValueForInterface:(id)arg1 ;
-(int)linkQualityValueForInterfaceType:(unsigned long long)arg1 ;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(NSArray *)myIPAddresses;
-(NSString *)myGatewayAddress;
-(NSString *)myIPAddress;
-(SCDynamicStoreRef)getDynamicStore;
-(unsigned long long)linkQualityForInterfaceType:(unsigned long long)arg1 ;
-(BOOL)isNetworkUp;
-(BOOL)isPrimaryCellular;
-(id)primaryInterfaceName;
-(NSString *)myIP;
-(void)setMyIP:(NSString *)arg1 ;
-(NSArray *)myIPs;
-(void)setMyIPs:(NSArray *)arg1 ;
-(IMConnectionMonitor *)connectionMonitor;
-(void)setConnectionMonitor:(IMConnectionMonitor *)arg1 ;
-(BOOL)lastPostedNetworkUp;
-(void)setLastPostedNetworkUp:(BOOL)arg1 ;
@end

