/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;

