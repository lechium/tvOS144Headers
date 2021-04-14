/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RWIDriverConfiguration, RWIDriverState, _RWIRelayClientConnection, NSSet, NSString;

@interface _RWIDriverInterfaceInfo : NSObject {

	RWIDriverConfiguration* _configuration;
	RWIDriverState* _state;
	_RWIRelayClientConnection* _connection;
	NSSet* _sessionIdentifiers;

}

@property (nonatomic,readonly) _RWIRelayClientConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * version; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,copy,readonly) NSSet * sessionIdentifiers;                     //@synthesize sessionIdentifiers=_sessionIdentifiers - In the implementation block
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(_RWIRelayClientConnection *)connection;
-(BOOL)isActive;
-(id)initWithConfiguration:(id)arg1 connection:(id)arg2 ;
-(void)updateDriverState:(id)arg1 ;
-(NSSet *)sessionIdentifiers;
@end

