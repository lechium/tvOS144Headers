/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACDClient, NSSet, NSDictionary;

@interface ACDClientAuthorization : NSObject {

	BOOL _isGranted;
	ACDClient* _client;
	NSSet* _grantedPermissions;
	NSDictionary* _options;

}

@property (assign,nonatomic) BOOL isGranted;                          //@synthesize isGranted=_isGranted - In the implementation block
@property (nonatomic,retain) ACDClient * client;                      //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSSet * grantedPermissions;              //@synthesize grantedPermissions=_grantedPermissions - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
-(ACDClient *)client;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setClient:(ACDClient *)arg1 ;
-(BOOL)isGranted;
-(id)initForClient:(id)arg1 ;
-(NSSet *)grantedPermissions;
-(void)setGrantedPermissions:(NSSet *)arg1 ;
-(void)setIsGranted:(BOOL)arg1 ;
@end
