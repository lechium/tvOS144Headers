/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSError.h>

@interface XBLaunchImageError : NSError {

	BOOL _fatal;
	BOOL _shouldDeny;

}

@property (getter=isFatal,readonly) BOOL fatal;              //@synthesize fatal=_fatal - In the implementation block
@property (readonly) BOOL shouldDeny;                        //@synthesize shouldDeny=_shouldDeny - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCode:(long long)arg1 bundleID:(id)arg2 reason:(id)arg3 fatal:(BOOL)arg4 ;
-(BOOL)isFatal;
-(BOOL)shouldDeny;
@end

