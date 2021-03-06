/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FTCServiceMonitor : NSObject {

	long long _availability;
	long long _type;
	int _token;

}

@property (nonatomic,readonly) long long serviceType; 
-(void)dealloc;
-(long long)serviceType;
-(long long)serviceAvailability;
-(void)updateAvailability;
-(void)_updateAvailability;
-(void)_postAvailability:(long long)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
@end

