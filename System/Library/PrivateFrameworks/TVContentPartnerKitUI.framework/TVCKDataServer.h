/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSMutableArray, NSMutableDictionary, NSArray;

@interface TVCKDataServer : NSObject {

	unsigned long long _serverType;
	id _serverID;
	NSString* _name;
	NSDate* _registeredDate;
	long long _serverStatus;
	NSMutableArray* _dataClients;
	NSMutableDictionary* _metadataDict;

}

@property (assign,nonatomic) unsigned long long serverType;                  //@synthesize serverType=_serverType - In the implementation block
@property (nonatomic,retain) id serverID;                                    //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,retain) NSDate * registeredDate;                        //@synthesize registeredDate=_registeredDate - In the implementation block
@property (retain) NSMutableArray * dataClients;                             //@synthesize dataClients=_dataClients - In the implementation block
@property (retain) NSMutableDictionary * metadataDict;                       //@synthesize metadataDict=_metadataDict - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long serverStatus;                         //@synthesize serverStatus=_serverStatus - In the implementation block
@property (nonatomic,readonly) NSArray * registeredDataClients; 
+(id)defaultServer;
+(id)activeServer;
+(void)registerDataServer:(id)arg1 ;
+(void)deregisterDataServer:(id)arg1 ;
+(BOOL)isRegistered:(id)arg1 ;
+(id)findServerWithServerID:(id)arg1 comparator:(/*^block*/id)arg2 ;
+(id)serversOfTypes:(unsigned long long)arg1 ;
+(void)setActiveServer:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)serverType;
-(void)setServerID:(id)arg1 ;
-(id)serverID;
-(NSMutableDictionary *)metadataDict;
-(void)setMetadataDict:(NSMutableDictionary *)arg1 ;
-(NSDate *)registeredDate;
-(void)registerDataClient:(id)arg1 ;
-(id)dataClientOfType:(unsigned long long)arg1 ;
-(void)setRegisteredDate:(NSDate *)arg1 ;
-(void)setServerStatus:(long long)arg1 ;
-(id)initWithServerName:(id)arg1 serverID:(id)arg2 serverType:(unsigned long long)arg3 ;
-(long long)serverStatus;
-(void)disconnectAllClients;
-(NSMutableArray *)dataClients;
-(void)deregisterDataClient:(id)arg1 ;
-(NSArray *)registeredDataClients;
-(void)setServerType:(unsigned long long)arg1 ;
-(void)setDataClients:(NSMutableArray *)arg1 ;
@end

