/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDSource.h>

@interface CFPDContainerSource : CFPDSource {

	CFStringRef _containerPath;

}
-(void)dealloc;
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 container:(CFStringRef)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 shmemIndex:(short)arg6 daemon:(id)arg7 ;
-(CFStringRef)container;
@end

