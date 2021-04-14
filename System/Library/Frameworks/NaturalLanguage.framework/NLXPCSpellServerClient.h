/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSXPCConnection;

@interface NLXPCSpellServerClient : NSObject {

	NSString* _serverName;
	NSXPCConnection* _connection;
	BOOL _invalidated;

}
+(id)spellServerClient;
+(void)requestAssetsForLanguage:(id)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(id)connection;
-(id)serverName;
-(void)sendCommand:(id)arg1 ;
-(id)initWithServerName:(id)arg1 ;
@end

