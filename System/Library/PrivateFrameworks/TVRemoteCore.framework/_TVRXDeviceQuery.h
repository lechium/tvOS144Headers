/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/_TVRCMediaRemoteDeviceQueryDelegate.h>
#import <TVRemoteCore/_TVRCRapportDeviceQueryDelegate.h>
#import <TVRemoteCore/_TVRCMatchPointDeviceQueryDelegate.h>

@protocol _TVRXDeviceQueryDelegate;
@class NSMutableDictionary, _TVRCMediaRemoteDeviceQuery, _TVRCRapportDeviceQuery, _TVRCMatchPointDeviceQuery, NSSet, NSString;

@interface _TVRXDeviceQuery : NSObject <_TVRCMediaRemoteDeviceQueryDelegate, _TVRCRapportDeviceQueryDelegate, _TVRCMatchPointDeviceQueryDelegate> {

	BOOL _isRunning;
	id<_TVRXDeviceQueryDelegate> _delegate;
	NSMutableDictionary* _aggregateDevices;
	_TVRCMediaRemoteDeviceQuery* _mediaRemoteQuery;
	_TVRCRapportDeviceQuery* _rapportDeviceQuery;
	_TVRCMatchPointDeviceQuery* _matchPointQuery;

}

@property (assign,nonatomic) BOOL isRunning;                                              //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * aggregateDevices;                      //@synthesize aggregateDevices=_aggregateDevices - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteDeviceQuery * mediaRemoteQuery;              //@synthesize mediaRemoteQuery=_mediaRemoteQuery - In the implementation block
@property (nonatomic,retain) _TVRCRapportDeviceQuery * rapportDeviceQuery;                //@synthesize rapportDeviceQuery=_rapportDeviceQuery - In the implementation block
@property (nonatomic,retain) _TVRCMatchPointDeviceQuery * matchPointQuery;                //@synthesize matchPointQuery=_matchPointQuery - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRXDeviceQueryDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * devices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_TVRXDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<_TVRXDeviceQueryDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(BOOL)isRunning;
-(NSSet *)devices;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)_startSearch;
-(void)_notifyDelegateDidUpdateDevices;
-(void)_stopSearch;
-(id)_findAggregateForIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_reevaluateAggregates;
-(void)mediaRemoteDeviceQuery:(id)arg1 addedTelevision:(id)arg2 ;
-(void)mediaRemoteDeviceQuery:(id)arg1 removedTelevision:(id)arg2 ;
-(void)rapportDeviceQuery:(id)arg1 addedDevice:(id)arg2 ;
-(void)rapportDeviceQuery:(id)arg1 removedDevice:(id)arg2 ;
-(void)matchpointDeviceQuery:(id)arg1 addedService:(id)arg2 ;
-(void)matchpointDeviceQuery:(id)arg1 removedService:(id)arg2 ;
-(NSMutableDictionary *)aggregateDevices;
-(void)setAggregateDevices:(NSMutableDictionary *)arg1 ;
-(_TVRCMediaRemoteDeviceQuery *)mediaRemoteQuery;
-(void)setMediaRemoteQuery:(_TVRCMediaRemoteDeviceQuery *)arg1 ;
-(_TVRCRapportDeviceQuery *)rapportDeviceQuery;
-(void)setRapportDeviceQuery:(_TVRCRapportDeviceQuery *)arg1 ;
-(_TVRCMatchPointDeviceQuery *)matchPointQuery;
-(void)setMatchPointQuery:(_TVRCMatchPointDeviceQuery *)arg1 ;
@end

