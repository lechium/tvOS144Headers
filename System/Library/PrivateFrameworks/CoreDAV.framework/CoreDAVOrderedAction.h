/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVAction.h>

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction {

	int _absoluteOrder;
	NSURL* _priorURL;

}

@property (nonatomic,readonly) int absoluteOrder;              //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (nonatomic,retain) NSURL * priorURL;                 //@synthesize priorURL=_priorURL - In the implementation block
-(id)description;
-(id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3 ;
-(int)absoluteOrder;
-(NSURL *)priorURL;
-(void)setPriorURL:(NSURL *)arg1 ;
@end

