/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ActionKit/ActionKit-Structs.h>
@class NSString, NSURL, NSDictionary;

@interface CLSocket : NSObject {

	NSString* _APIKey;
	long long _appID;
	NSURL* _authURL;
	NSDictionary* _channels;

}

@property (nonatomic,copy) NSString * APIKey;                      //@synthesize APIKey=_APIKey - In the implementation block
@property (assign,nonatomic) long long appID;                      //@synthesize appID=_appID - In the implementation block
@property (nonatomic,retain) NSURL * authURL;                      //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,retain) NSDictionary * channels;              //@synthesize channels=_channels - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)channels;
-(long long)appID;
-(void)setAppID:(long long)arg1 ;
-(NSURL *)authURL;
-(void)setChannels:(NSDictionary *)arg1 ;
-(void)setAuthURL:(NSURL *)arg1 ;
-(NSString *)APIKey;
-(void)setAPIKey:(NSString *)arg1 ;
@end

