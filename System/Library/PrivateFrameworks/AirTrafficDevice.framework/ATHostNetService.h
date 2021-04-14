/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNetService, NSString;

@interface ATHostNetService : NSObject {

	NSNetService* _netService;
	NSString* _libraryIdentifier;

}

@property (nonatomic,readonly) NSNetService * netService;                 //@synthesize netService=_netService - In the implementation block
@property (nonatomic,readonly) NSString * libraryIdentifier;              //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
-(id)initWithNetService:(id)arg1 ;
-(NSNetService *)netService;
-(NSString *)libraryIdentifier;
@end
