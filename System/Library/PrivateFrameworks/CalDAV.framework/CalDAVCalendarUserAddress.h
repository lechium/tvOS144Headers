/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface CalDAVCalendarUserAddress : NSObject {

	NSURL* _address;
	long long _preferred;

}

@property (nonatomic,retain) NSURL * address;              //@synthesize address=_address - In the implementation block
@property (assign) long long preferred;                    //@synthesize preferred=_preferred - In the implementation block
+(long long)defaultPreferredAttribute;
+(id)preferredAddress:(id)arg1 ;
+(id)_minPreferredAddress:(id)arg1 ;
+(id)_preferredAddressNoPreferred:(id)arg1 ;
+(id)packCalDAVUserAdress:(id)arg1 ;
+(id)unpackCalDAVUserAdress:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSURL *)address;
-(long long)preferred;
-(void)setPreferred:(long long)arg1 ;
-(void)setAddress:(NSURL *)arg1 ;
-(id)initWithAddress:(id)arg1 preferred:(long long)arg2 ;
@end

