/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libacmobileshim.dylib/ACCAuthContext.h>

@class NSString;

@interface ACMAuthContext : ACCAuthContext {

	NSString* _userPreferences;

}

@property (retain) NSString * userPreferences;              //@synthesize userPreferences=_userPreferences - In the implementation block
-(void)dealloc;
-(NSString *)userPreferences;
-(void)setUserPreferences:(NSString *)arg1 ;
-(id)parametersDictionary;
-(BOOL)isDevicePwnd;
@end

