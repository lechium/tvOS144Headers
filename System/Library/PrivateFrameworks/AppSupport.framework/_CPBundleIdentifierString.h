/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppSupport/AppSupport-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface _CPBundleIdentifierString : NSString {

	NSString* _executablePath;
	NSString* _bundleIdentifierOrProcessName;
	BOOL _isProcessName;

}
-(void)dealloc;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)_loadBundleIdentifierOrProcessName;
-(id)_initWithExecutablePath:(id)arg1 ;
-(BOOL)_isProcessName;
@end
