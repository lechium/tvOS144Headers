/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _PFSpawn : NSObject {

	int _pid;
	int _termstatus;

}

@property (readonly) int processID; 
@property (readonly) int terminationStatus; 
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 redirect:(id)arg4 ;
-(int)terminationStatus;
-(void)waitUntilExit;
-(int)processID;
@end

