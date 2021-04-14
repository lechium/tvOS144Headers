/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiLocationManagerDelegate.h>

@protocol WiFiLocaleManagerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject, NSDateFormatter, WiFiLocationManager;

@interface WiFiLocaleManager : NSObject <WiFiLocationManagerDelegate> {

	BOOL _localeCheckSuspended;
	unsigned char _isWaitingForLocationUpdate;
	unsigned char _testModeEnabled;
	int _localeSource;
	int _testMcc;
	id<WiFiLocaleManagerDelegate> _delegate;
	NSString* _localeCountryCode;
	double _localeTimeout;
	double _localeLastUpdatedTime;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _localeTimer;
	NSDateFormatter* _dateFormatter;
	WiFiLocationManager* _locationManager;
	NSString* _testHost11d;
	NSString* _testPeer;
	NSString* _testTimeZoneCC;

}

@property (assign) BOOL localeCheckSuspended;                                            //@synthesize localeCheckSuspended=_localeCheckSuspended - In the implementation block
@property (retain) NSString * localeCountryCode;                                         //@synthesize localeCountryCode=_localeCountryCode - In the implementation block
@property (assign) int localeSource;                                                     //@synthesize localeSource=_localeSource - In the implementation block
@property (assign) double localeTimeout;                                                 //@synthesize localeTimeout=_localeTimeout - In the implementation block
@property (assign) double localeLastUpdatedTime;                                         //@synthesize localeLastUpdatedTime=_localeLastUpdatedTime - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> localeTimer;                            //@synthesize localeTimer=_localeTimer - In the implementation block
@property (retain) NSDateFormatter * dateFormatter;                                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (retain) WiFiLocationManager * locationManager;                                //@synthesize locationManager=_locationManager - In the implementation block
@property (assign) unsigned char isWaitingForLocationUpdate;                             //@synthesize isWaitingForLocationUpdate=_isWaitingForLocationUpdate - In the implementation block
@property (assign) unsigned char testModeEnabled;                                        //@synthesize testModeEnabled=_testModeEnabled - In the implementation block
@property (assign) int testMcc;                                                          //@synthesize testMcc=_testMcc - In the implementation block
@property (retain) NSString * testHost11d;                                               //@synthesize testHost11d=_testHost11d - In the implementation block
@property (retain) NSString * testPeer;                                                  //@synthesize testPeer=_testPeer - In the implementation block
@property (retain) NSString * testTimeZoneCC;                                            //@synthesize testTimeZoneCC=_testTimeZoneCC - In the implementation block
@property (assign,nonatomic,__weak) id<WiFiLocaleManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getStringOfLocaleSource:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id<WiFiLocaleManagerDelegate>)delegate;
-(void)setDelegate:(id<WiFiLocaleManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLocaleSource:(int)arg1 ;
-(int)localeSource;
-(void)didUpdateLocations:(id)arg1 ;
-(WiFiLocationManager *)locationManager;
-(void)setLocationManager:(WiFiLocationManager *)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(void)setLocaleCheckSuspended:(BOOL)arg1 ;
-(void)setLocaleCountryCode:(NSString *)arg1 ;
-(void)setLocaleLastUpdatedTime:(double)arg1 ;
-(void)setLocaleTimeout:(double)arg1 ;
-(void)setTestMcc:(int)arg1 ;
-(void)setTestHost11d:(NSString *)arg1 ;
-(void)setTestPeer:(NSString *)arg1 ;
-(void)setLocaleTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)localeTimer;
-(void)determineLocale:(unsigned char)arg1 ;
-(void)setIsWaitingForLocationUpdate:(unsigned char)arg1 ;
-(NSString *)localeCountryCode;
-(double)localeLastUpdatedTime;
-(BOOL)localeCheckSuspended;
-(void)setTestModeEnabled:(unsigned char)arg1 ;
-(void)setTestTimeZoneCC:(NSString *)arg1 ;
-(int)testMcc;
-(NSString *)testHost11d;
-(NSString *)testPeer;
-(double)localeTimeout;
-(unsigned char)testModeEnabled;
-(BOOL)isDefaultCountryCode:(id)arg1 ;
-(id)getLocaleFromCompanion;
-(id)getLocaleFromMcc;
-(id)getLocaleFromLocation:(id)arg1 ;
-(id)getLocaleFromMultiple80211d;
-(id)getLocaleFromPeer;
-(id)getLocaleFromTimezone;
-(void)setCountryCode:(id)arg1 source:(int)arg2 ;
-(id)getLocaleUsingBoundingBoxes:(id)arg1 ;
-(id)getLocaleUsingReverseGeocoder:(id)arg1 ;
-(id)getRestrictedCountryCodeFromTimezone;
-(id)getRestrictedCountryCodeFromRegionInfo;
-(id)applySetCountryCodeExceptions:(id)arg1 ;
-(unsigned char)isWaitingForLocationUpdate;
-(unsigned char)getNetworkReachability;
-(void)didChangeAuthorizationStatus;
-(void)determineAndSetLocale:(unsigned char)arg1 ;
-(id)getLocaleCountryCode;
-(int)getLocaleSource;
-(double)getLocaleLastUpdatedTime;
-(BOOL)isLocaleCheckSuspended;
-(void)setLocaleTestParams:(id)arg1 ;
-(NSString *)testTimeZoneCC;
@end

